#include <fstream>


std::string fread(std::string filename){
	ifstream q( filename);
	if(!q.is_open()){	
		return "";
	}else{
		std::string w;
		q>>w;
		q.close();
		return w;
	}
}

std::string freadline(std::string filename){
	ifstream q(filename);
	if(!q.is_open()){	
		return "";
	}else{
		std::string w;
		getline(q,w);
		q.close();
		return w;
	}
	
}

std::string freadall(std::string filename){
	ifstream q(filename);
	if(!q.is_open()){	
		return "";
	}else{
		std::string e="";
		while(!q.eof()){
		std::string w;
		getline(q,w);
		e+=w;
		e+="\n";
		}
		q.close();
		return e;
	}
}

void fwrite(std::string filename, std::string txt){
	ofstream q(filename);
	if(!q.is_open()){	
	}else{
		q<<txt;
	}	
}

void fcreate(std::string filename){
	ofstream q( filename);
}

