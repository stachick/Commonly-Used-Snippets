//Shane Tachick
//Code for creating a 2d vector and filling it with an incremental count starting at 0

void fillVector(vector<vector<int>> &nXn, int n)
{
	for (auto i = 0; i < n; ++i)
	{
		vector<int> temp;
		for (auto j = 0; j < n; ++j)
		{
			temp.push_back(((i*n)+j));
		}
		nXn.push_back(temp);
	}
}