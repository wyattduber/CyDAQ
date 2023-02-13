.PHONY: default

default:
	python3 -m pip install -r requirements.txt

build: gui/app.py cli/
	python3 -m PyInstaller --windowed --noconfirm --exclude-module scipy --add-data="cli:cli" gui/app.py cli/*.py
	zip -q PyDAQ-1.0.0.zip dist/

clean:
	rm -rv build/ dist/
