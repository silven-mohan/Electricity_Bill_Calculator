⚡ Electricity Bill Calculator (CLI-based)
This is a simple CLI-based application written in C that calculates your approximate electricity bill based on the previous month's meter reading and the current meter reading. It uses a fixed rate per unit to compute the total charge.

🔧 Features
Takes user input for previous and present meter readings.

Calculates billed units (consumption).

Applies a fixed unit rate (₹41/unit by default).

Displays a neat breakdown of bill details.

Lightweight and easy to run on any C-compatible environment.

📦 Installation
Download the ZIP from the Releases section.

Extract the ZIP to your preferred location.

Run the .exe file if you're on Windows (precompiled).

Alternatively, compile manually with a C compiler:

``` bash
  gcc Electricity_Bill_Calculator.c -o bill_calculator
  ./bill_calculator
```

## 💡 Example Output
```
  Enter the Previous Reading value from the bill: 1250
Enter the Present Reading from the Electric Meter: 1350

        Bill Details
_______________________________
|Present Reading     :1350
|Previous Reading    :1250
|Billed Units        :100
|Total Charge        :4100
_______________________________
```

## 📃License

  See included [LICENSE](./LICENSE) file for more details.

## Author: Silven Mohan
