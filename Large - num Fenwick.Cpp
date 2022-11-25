// Fenwick tree
void upd(int x,int diff){
	for (int i = x; i < sz; i |= i + 1)
		bit[i]+=diff;
}

int sum(int x){
	int res = 0;
	for (int i = x; i >= 0; i = (i & (i + 1)) - 1)
		res += bit[i];
	return res;
}
