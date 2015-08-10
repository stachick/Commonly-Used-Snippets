//Shane Tachick
//fills an empty [n x n] matrix, each entry is it's own index, starting from the top left.
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