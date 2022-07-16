/**
 * 
 * Author: withtahmid
 * Created: 16-07-22 23:59
 * 
 * */
#include<bits/stdc++.h>
#include<ctime>
#include <sys/stat.h>
#include<unistd.h> 
#include <fstream>
using namespace std;
string mainPath = "";
string dateNtime = " * Created: ";
void generate_date()
{
	time_t rawtime;
  	struct tm * timeinfo;
  	char buffer[80];
 	time (&rawtime);
  	timeinfo = localtime(&rawtime);
  	strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
  	string str(buffer);
  	dateNtime += str;
}


int main()
{
	generate_date();
	char c;
	cin>>c; 
	if(c == 'C' || c == 'c')
	{
		int div;
		cin>>div;
		cin.ignore();
		string folderName;
		cin>>folderName;
		int numOfFile;
		cin>>numOfFile;
		
		string path = "Codes/CodeForces/div";
		path += div + '0';
		path += "/";
		path += folderName;
		path += '/';
		mainPath = path;
		if(!mkdir(path.c_str(), 0777))
		{
			for(int i = 0; i < numOfFile; i++)
			{
				string fileName = path;
			    fileName += 'A' + i;
			    fileName += ".cpp";
				string line;
				    ifstream ini_file{
				        "Template.cpp"
				    };
				    
				    ofstream out_file{ fileName};
				    if (ini_file && out_file) {
				  
				        while (getline(ini_file, line)) {
				        	if(line == " * Created: dd-mm-yy hh:mm")
				        		line = dateNtime;

				            out_file << line << "\n";
				        }
				    }
				    else {
				       cout<< "Cannot create file: "<<i<<endl;
				    }
				    ini_file.close();
				    out_file.close();
				    string command ="subl "; 
				    command += fileName;
				    system(command.c_str());
			}
		}
		else
		{
			cout<<"Some error occoured\n";
		}
	}
	else if(c == 'A' || c == 'a')
	{
		cin.ignore();
		char type;
		cin>>type;
		string folderName;
		cin.ignore();
		cin>>folderName;
		int numOfFile;
		cin>>numOfFile;
		
		string path = "Codes/Atcoder/";
		type == 'b' || type == 'B' ? path +=  "Beginner" : path +=  "Regular" ;
		path += "/";
		path += folderName;
		path += '/';
		mainPath = path;
		if(!mkdir(path.c_str(), 0777))
		{
			for(int i = 0; i < numOfFile; i++)
			{
				string fileName = path;
			    fileName += 'A' + i;
			    fileName += ".cpp";
				string line;
				    ifstream ini_file{
				        "Template.cpp"
				    };
				    
				    ofstream out_file{ fileName};
				    if (ini_file && out_file) {
				  
				        while (getline(ini_file, line)) {
				        	if(line == " * Created: dd-mm-yy hh:mm")
				        		line = dateNtime;
				            out_file << line << "\n";
				        }
				        //cout << " File: "<<i<< ".cpp copy Finished \n";
				    }
				    else {
				       cout<< "Cannot create file: "<<i<<endl;
				    }
				    ini_file.close();
				    out_file.close();
				     string command ="subl "; 
				    command += fileName;
				    system(command.c_str());
			}
		}

		else
		{
			cout<<"Some error occoured\n";
		}

	}
	else if(c == 'x' || c == 'X')
	{
		string path;
		cin>>path;
		int numOfFile;
		cin>>numOfFile;
		path += '/';
		mainPath = path;
		if(!mkdir(path.c_str(), 0777))
		{
			for(int i = 0; i < numOfFile; i++)
			{
				string fileName = path;
			    fileName += 'A' + i;
			    fileName += ".cpp";
				string line;
				    ifstream ini_file{
				        "Template.cpp"
				    };
				    
				    ofstream out_file{ fileName};
				    if (ini_file && out_file) {
				  
				        while (getline(ini_file, line)) {
				        	if(line == " * Created: dd-mm-yy hh:mm")
				        		line = dateNtime;
				            out_file << line << "\n";
				        }
				        //cout << " File: "<<i<< ".cpp copy Finished \n";
				    }
				    else {
				       cout<< "Cannot create file: "<<i<<endl;
				    }
				    ini_file.close();
				    out_file.close();
				     string command ="subl "; 
				    command += fileName;
				    system(command.c_str());
			}
		}

		else
		{
			cout<<"Some error occoured\n";
		}
	}
	else
	{
		string str; getline(cin,str);
		cout<<"ERROR!!!\n";
	}
	cout << endl << "cd "<<mainPath<<endl;
	string command = "cd ";
	command += mainPath;
}