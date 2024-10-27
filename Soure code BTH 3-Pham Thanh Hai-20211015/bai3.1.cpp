int lucas(int n) {
	//Pham Thanh Hai-20211015
    if(n>1) return lucas(n-1)+lucas(n-2);
    if(n==1) return 1;
    return 2;
    
}
