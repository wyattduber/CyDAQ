.PHONY: default

default:
	python -m pip install -r requirements.txt

build: gui/app.py cli/
	python -m PyInstaller --windowed --noconfirm -i ".\gui\qtdesigner\assets\CyDAQ_Logo_vector.ico" -n "CyDAQ" --onefile --add-data="cli;cli" gui/app.py cli/*.py

clean:
	rm -rvf build/ dist/
