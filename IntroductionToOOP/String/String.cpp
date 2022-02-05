String operator+(const String& left, const String& right)
{
	String result(left.get_size() + right.get_size() - 1);
	for (int i = 0; i < left.get_size(); i++)
		//l-value = r-value;
		result[i] = left[i];
	//result.get_str()[i] = left.get_str()[i];
	for (int i = 0; i < left.get_size(); i++)
		result[left.get_size() - 1 + i] = right[i];
	//result.get_str()[left.get_size() - 1 + i] = left.get_str()[i];
	return result;
}

ostream& operator<<(ostream& os, const String& obj)
{
	return os << obj.get_str();
}