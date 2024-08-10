#include <iostream>
using namespace std;

// Function declarations
void calcMonthlyAvg(int expenditure[][12], int num_years);
void calcYearlyAvg(int expenditure[][12], int num_years);
void calcRangeAvg(int expenditure[][12], int num_years);
void addData(int expenditure[][12], int num_years);
void displayTable(int expenditure[][12], int num_years);

void addData(int expenditure[][12], int num_years) {
    for (int i = 0; i < num_years; i++) {
        for (int j = 0; j < 12; j++) {
            cout << "Enter the expenditure for year " << i + 1 << " month " << j + 1 << ": $";
            cin >> expenditure[i][j];
        }
    }
    cout << "Thank you for entering the data. Record Kept!" << endl;
}

void calcMonthlyAvg(int expenditure[][12], int num_years) {
    int year, month;
    cout << "You have to provide specific data for which month of which year to get the average." << endl;
    cout << "Year: ";
    cin >> year;
    cout << "Month: ";
    cin >> month;

    year--;
    month--;

    if (year < num_years && month < 12) {
        cout << "The expenditure for year " << year + 1 << " month " << month + 1 << " is: $" << expenditure[year][month] << endl;
    } else {
        cout << "Invalid year or month. Please try again." << endl;
    }
}

void calcYearlyAvg(int expenditure[][12], int num_years) {
    int year;
    cout << "For which year do you want to calculate the average? ";
    cin >> year;
    year--;

    if (year < num_years) {
        int yearlySum = 0;
        for (int j = 0; j < 12; j++) {
            yearlySum += expenditure[year][j];
        }
        int yearlyAvg = yearlySum / 12;
        cout << "The total expenditure for year " << year + 1 << " is: $" << yearlySum << endl;
        cout << "The yearly average for year " << year + 1 << " is: $" << yearlyAvg << endl;
    } else {
        cout << "Invalid year. Please try again." << endl;
    }
}

void calcRangeAvg(int expenditure[][12], int num_years) {
    int initial_year, initial_month, final_year, final_month;
    int month_count = 0;

    cout << "Enter the initial year and month, followed by the final year and month for the range." << endl;
    cout << "Initial Year: ";
    cin >> initial_year;
    cout << "Initial Month: ";
    cin >> initial_month;
    cout << "Final Year: ";
    cin >> final_year;
    cout << "Final Month: ";
    cin >> final_month;

    initial_year--;
    initial_month--;
    final_year--;
    final_month--;

    int rangeSum = 0;

    for (int i = initial_year; i <= final_year; i++) {
        int start_month = (i == initial_year ? initial_month : 0);
        int end_month = (i == final_year ? final_month : 11);

        for (int j = start_month; j <= end_month; j++) {
            rangeSum += expenditure[i][j];
            month_count++;
        }
    }
    if (month_count > 0) {
        int rangeAvg = rangeSum / month_count;
        cout << "The total expenditure over the range is: $" << rangeSum << endl;
        cout << "The average expenditure per month over the range is: $" << rangeAvg << endl;
    } else {
        cout << "Invalid range. Please try again." << endl;
    }
}

void displayTable(int expenditure[][12], int num_years) {
    cout << "Expenditure table" << endl;
    int tableSum = 0;
    int month_count=0;
    for (int i = 0; i < num_years; i++) {
        cout << "Year " << i + 1 << "\t";
        for (int j = 0; j < 12; j++) {
            tableSum+=expenditure[i][j];
            month_count++;
            cout << "$" << expenditure[i][j] << ' ';
        }
        cout << endl;
    }
    cout<<"Total Expenditure: $"<<tableSum<<endl;
    cout<<"Avg Expenditure: $"<<int(tableSum/month_count)<<endl;
}

int main() {
    int num_years;
    cout << "Enter the number of years to track expenses: ";
    cin >> num_years;

    int expenditure[num_years][12];
    addData(expenditure, num_years);

    int task = 0;

    while (task != 69) {
        cout << "\nHere's a list of tasks you can perform:" << endl;
        cout << "1. Monthly Expenditure" << endl;
        cout << "2. Yearly Average" << endl;
        cout << "3. Average over a range of time" << endl;
        cout << "4. Display expenditure table" << endl;
        cout << "69. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> task;

        switch (task) {
            case 1:
                calcMonthlyAvg(expenditure, num_years);
                break;
            case 2:
                calcYearlyAvg(expenditure, num_years);
                break;
            case 3:
                calcRangeAvg(expenditure, num_years);
                break;
            case 4:
                displayTable(expenditure, num_years);
                break;
            case 69:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Please enter a valid choice!" << endl;
                break;
        }
    }

    return 0;
}
