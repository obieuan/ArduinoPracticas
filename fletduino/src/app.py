from flet import Page
from ui.interfaz import construir_interfaz

def main(page: Page):
    construir_interfaz(page)

if __name__ == "__main__":
    import flet
    flet.app(target=main)
