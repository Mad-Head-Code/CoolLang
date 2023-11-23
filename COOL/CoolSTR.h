#include <COOL/Cool.h>
number length(text s){
	return sizeof(s)/sizeof(char);
}

number find(text where, text what){
	return where.find(what);
}

text subtext(text s, number start, number end){
	return s.substr(start,end);
}

text append(text where, text what){
	return where.append(what);
}

text insert(text where,text what, number whereinwhere){
	return where.insert(whereinwhere, what);
}

text replace(text where, text what, number begin, number end){
	return where.replace(begin, end, what);
}

