bool loadVector(vector<string> &wordlist)
{
	ifstream infile("enable1.txt");
	string current;
	while(true)
	{
		getline(infile, current);
		if(!infile)
		{
			if(infile.eof())
				{
					cout << "----------------------------" << endl;
					cout << "end of file reached, groovy." << endl;
					return true;
				}
			else
				{
					cout << "danger will robinson, danger!" << endl;
					return false;
				}
		}
		wordlist.push_back(current);
	}
}