#include <iostream>
#include <string>
using namespace std;


int main()
 {
 	int arr[5] = {3,5,7,6,9};
 	
 	int command;
 	
 	int value;
 	int indx;
 	
 	setlocale(0, "");
 	
 	
 	while (true)			
{
	cout << "0 - выход 1 - вывод 2 - запись(не более 5 эл) 3 - сорт" << endl <<  "¬ведите комманду:";
	cin>>command;
	system("cls");
	
	switch (command)
	{
		case 1:
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl<<endl;
		break;
			
		case 2:
			cout<<"¬ведите номер элемента дл€ записи и его значение:";
			cin>>indx>>value;
			
			arr[indx] = value;
			system("cls");
		break;
		
		case 3:
		
		break;	
		
		case 0:
			return 0;
		break;
		
	}
}
 	
	return 0;
 }
