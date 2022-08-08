/**
 * 
 * Author: withtahmid
 * Created: 16-07-22 23:59
 * Updated: 09-08-22 02:15
 * 
 * */
#include<bits/stdc++.h>
#include<ctime>
#include <sys/stat.h>
#include<unistd.h> 
#include <fstream>
using namespace std;
string dateNtime = " * Created: ";
string path = "Codes/";
int numOfFile;
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

void generate_path()
{
	char c;
	char type;
	string folderName;
	cin >> c >> type >> folderName >> numOfFile;
	if(c == 'C' || c == 'c')
	{		
		path += "CodeForces/div";
		path += type;
		path += "/";
		path += folderName;
		path += '/';
	}
	else if(c == 'A' || c == 'a')
	{
		
		path += "Atcoder/";
		type == 'b' || type == 'B' ? path +=  "Beginner" : path +=  "Regular" ;
		path += "/";
		path += folderName;
		path += '/';
	}
	else
	{
		path = "no_path";
	}
}



bool create_files()
{	
	bool yes = true;

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
		    	return false;
		    }
		    ini_file.close();
		    out_file.close();
		}
	}
	else
	{
		cout<<"Some error occoured\n";
		return false;
	}
	return true;
}
void create_io_files()
{
	ofstream input("input.txt");
	input.close();
	ofstream output("output.txt");
	output.close();
}
void open_files_in_sublime_text()
{
	string command ="subl "; 
	command += path;
	command += "A.cpp";
	system(command.c_str());
	command ="subl "; 
	command += path;
	command += "input.txt";
	system(command.c_str());
	command ="subl "; 
	command += path;
	command += "output.txt";
	system(command.c_str());
}
int main()
{
	generate_date();
	generate_path();
	if(path != "no-path" && numOfFile > 0)
	{
		if(create_files())
		{
			//create_io_files();
			open_files_in_sublime_text();
			cout << endl << "cd "<<path<<endl;
		}
		else
			cout << "Couldn't create file\n";
		
		
	}
	else
	
		cout << "Invalid Path or File number\n";

}