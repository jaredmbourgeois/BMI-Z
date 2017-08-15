BMI-Z README

INSTRUCTIONS
1. Paste patient data into BMI_INPUT.xlsx & copy the formulas for calculated values (Surgery Ages & Preop BMI) to the cells corresponding to the new data.
	- don't leave any columns blank
	- make sure no other text is anywhere in the spreadsheet
2. Create a .csv file from BMI_INPUT.xlsx by using the "Save As..." option.
3. Run the program
	WINDOWS
		i. open the BMI-Z file
		ii. double click BMI-Z_win.exe
	MAC
		i. open Terminal
		ii. change to the BMI-Z file by typing "cd " and dragging the file into the terminal window
		iii. type "./BMI-Z_mac"

4. The program will run and create the BMI_OUTPUT.csv file.
	- if BMI_OUTPUT.csv already exists, it will be overwritten
	- no changes are made to BMI_INPUT file

* MRNs (or any numbers) with a leading zero will have the zero deleted on conversion to .csv
	- combine the output data with the original MRNs



SOURCES ======================
2000 CDC GROWTH CHARTS FOR THE UNITED STATES: METHODS AND DEVELOPMENT
https://www.cdc.gov/nchs/data/series/sr_11/sr11_246.pdf

WHO - MALES & FEMALES 0-2YRS
http://www.who.int/childgrowth/software/en/
bmianthro.txt from "Download R" file

CDC - MALES & FEMALES 2-20YRS
https://www.cdc.gov/growthcharts/percentile_data_files.htm
==============================
