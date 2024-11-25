


from flask import Flask, request, jsonify
import json
import os

app = Flask(__name__)

# Ruta para almacenar los datos en un archivo JSON
json_file = 'sensor_data.json'

# Cargar datos iniciales si el archivo ya existe
if os.path.exists(json_file):
    with open(json_file, 'r') as f:
        sensor_data = json.load(f)
else:
    sensor_data = []

@app.route('/send-data', methods=['POST'])
def receive_data():
    try:
        # Obtener los datos JSON enviados desde Arduino (a través de Python o ESP32)
        data = request.get_json()

        # Verificar si los datos tienen el formato adecuado
        if 'sensor_value' in data:
            sensor_value = data['sensor_value']
            
            # Almacenar el nuevo dato en la lista
            sensor_data.append({
                'sensor_value': sensor_value,
                'timestamp': request.args.get('timestamp', 'No timestamp provided')
            })
            
            # Guardar en el archivo JSON
            with open(json_file, 'w') as f:
                json.dump(sensor_data, f, indent=4)

            return jsonify({'message': 'Dato recibido y almacenado'}), 200
        else:
            return jsonify({'error': 'Dato incorrecto'}), 400

    except Exception as e:
        return jsonify({'error': str(e)}), 500

# Ruta para consultar los datos almacenados
@app.route('/get-data', methods=['GET'])
def get_data():
    return jsonify(sensor_data), 200

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0', port=5000)
