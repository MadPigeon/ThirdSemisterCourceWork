#include"DogsField.h"
#include"DogsCell.h"

DogsField::DogsField()
{
	int n=28,i,j,temp;
	DogsCell *generate;
	generate=new DogsCell(0,0);
	for(i=1;i<=n;i++)
	{
		generate = new DogsCell(i, i+1);
		// cells.push_back(*(new DogsCell(12,22) ));
		cells.push_back(*generate);
		////delete[] generate;
	}
	generate= new DogsCell(n,0);
	cells.push_back(*generate);
	//delete[] generate;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			temp=n+(i-1)*3+j;
			if (j == 1) cells[(i-1)*7+1].add_direction(temp);
			if (j<4) generate=new DogsCell(temp,temp+1);
			else generate=new DogsCell(temp,temp);
			cells.push_back(*generate);
			//delete[] generate;
		}
	}
	cout << "done";
}
vector <DogsCell> DogsField::possible_directions(DogsCell curr)
{
	vector<int> numbers = curr.get_directions();
	vector<DogsCell> result;
	int n = numbers.size();
	for (int i = 0; i < n; i++)
	{
		result.push_back(cells[numbers[i]]);
	}
	return result;
}