#include <iostream>
using namespace std;

//declaring functions
void handleTask(int expenditure[][12], int num_years);
void calcMonthlyAvg(int expenditure[][12], int num_years);
void calcYearlyAvg(int expenditure[][12], int num_years);
void calcRangeAvg(int expenditure[][12], int num_years);

void handleTask(int expenditure[][12], int num_years){

  cout<< "Here's a list of task can perform:"<< endl;
  cout<< "1. Monthly Average"<<endl;
  cout<< "2. Yearly Average"<<endl;
  cout<< "3. Average over a range of time"<<endl;

  cout<<"Enter 1, 2, or 3 to perform respective task"<< endl;
  
  int task;
  cin>>task;


  switch (task)
  {
  case 1: calcMonthlyAvg(expenditure, num_years);
    break;


  case 2: calcYearlyAvg(expenditure, num_years);
  break;

  case 3: calcRangeAvg(expenditure, num_years);
  break;

  default:
    cout<<"Please follow the instructions properly!"<<endl;
    break;
  }
}

void calcMonthlyAvg(int expenditure[][12], int num_years){
  int year, month;
  cout<<"You have to provide me specific data for which month of which year to get the data."<<endl;
  cout<<"Year: "<<endl;
  cin>>year;
  cout<<"Month: "<<endl;
  cin>>month;

  year--;
  month--;
  cout<<"The monthly average for the year "<<year+1<<" month "<<month+1<< " is: "<< expenditure[year][month]<<endl;
  handleTask(expenditure, num_years) ;
}

void calcYearlyAvg(int expenditure[][12],int num_years){
  int year;
  cout<<"For which year, you want to calculate the average? \t";
  cin>>year;
  year--;
  int yearlySum = 0;

    for(int j =0; j<12; j++){
      yearlySum+= expenditure[year][j];
    }
  int yearlyAvg;
  yearlyAvg = yearlySum/12; 
  year++;
  cout<<"The total expenditure is: "<<yearlySum<<endl;
  cout<<"The yearly average for the year "<<year<<" is: "<<yearlyAvg<<endl;

  handleTask(expenditure, num_years) ;
}


void calcRangeAvg(int expenditure[][12], int num_years){
  int initial_year, initial_month, final_year, final_month;
  int month_count=0;
  
  cout<<"So you want to calculate average over a range of years and months?? huh! For that you have to give me initial year, month and final year, month. You down??"<<endl;

  cout<<"Initial Year: \t"; cin>>initial_year;
  cout<<"Initial Month: \t"; cin>>initial_month;
  cout<<"Final Year: \t"; cin>>final_year;
  cout<<"Final Month: \t"; cin>>final_month;

  //array index milauna minus gareko
  initial_year--;
  initial_month--;
  final_year--;
  final_month--;

  int rangeSum = 0;
  
  for(int i = initial_year; i<=final_year; i++){

    int start_month = (i== initial_year? initial_month==initial_month: 0);
    int end_month = (i==final_year? final_month==final_month: 11);
    for(int j=start_month; j<=end_month; j++){
      rangeSum += expenditure[i][j];
      month_count++;
    }
  }

  int rangeAvg;
  rangeAvg = rangeSum/month_count;

  cout<<"The total expenditure is: "<<rangeSum<<endl;
  cout<<"The avg expenditure per month is: "<<rangeAvg<<endl;


    handleTask(expenditure, num_years);
  }

  






int main () {
  int num_years;
  cout<<"Enter the number of years to track expenses"<<endl;
  cin>>num_years;
  int expenditure[num_years][12];

  for(int i = 0; i<num_years; i++){
    for(int j =0; j<12; j++){
      cout << "Enter the expenditure for year " << i+1 << " month " << j+1 << endl;
      cin>>expenditure[i][j];
    }
  }

  cout<<"Thank you for entering the data. Record Kept!"<<endl;

  handleTask(expenditure, num_years);

  return 0;
}



