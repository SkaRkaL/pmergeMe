// int odd = -1;
	// if (vec.size() % 2 == 1)
	// {
	// 	odd = vec[vec.size() - 1];
	// 	vec.erase(vec.end() - 1);
	// }

	// vector<std::pair<int, int> >	pairs;

	// for (int i = 0; i < vec.size(); i++)
	// {
	// 	if (vec[i] > vec[i + 1])
	// 			pairs.push_back(make_pair(vec[i], vec[i + 1]));
	// 		else
	// 			pairs.push_back(make_pair(vec[i + 1], vec[i]));

	// }


	// // for (int  i = 0 ; i < pairs.size(); i+=2)
	// // {
	// // 	cout << "first :	" << pairs[i].first << endl;
	// // 	cout << "second : " <<  pairs[i].second << endl;
	// // 	cout << endl;
	// // }


	// vector<int> left;
	// vector<int> right;

	// for (int  i = 0 ; i < pairs.size(); i+=2)
	// {
	// 	left.push_back(pairs[i].first);
	// 	right.push_back(pairs[i].second);
	// }

	// if (odd != -1)
	// 	left.push_back(odd);

	// cout << "left : ";
	// for (int i = 0; i < left.size(); i++)
	// {
	// 	cout << left[i] << " ";
	// }
	// cout << endl;

	// cout << "right : ";
	// for (int i = 0; i < right.size(); i++)
	// {
	// 	cout << right[i] << " ";
	// }
	// cout << endl;
	

	// // insertion sort 
	// for (int i = 1; i < left.size(); i++)
	// {
	// 	int key = left[i];
	// 	int j = i - 1;

	// 	while (j >= 0 && left[j] > key)
	// 	{
	// 		left[j + 1] = left[j];
	// 		j -= 1;
	// 	}
	// 	left[j + 1] = key;
	// }
	// cout << "sorted left : ";
	// for (int i = 0; i < left.size(); i++)
	// {
	// 	cout << left[i] << " ";
	// }
	// cout << endl;


	// vector<int>::iterator it = left.begin();
	// for (int i = 0; i < right.size(); i++)
	// {
	// 	it = lower_bound(left.begin(), left.end(), right[i]);
	// 	left.insert(it, right[i]);
	// }


	// for (int i = 0; i < left.size(); i++)
	// {
	// 	cout << left[i] << " ";
	// }
	// cout << endl;