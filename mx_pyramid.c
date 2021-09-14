void mx_printchar(char);

void mx_pyramid(int n) {
	if(n > 1 && n % 2 == 0) {
		int h2 = 1;
		int b = n / 2;
		for(int h = 1; h < n; h++) {
			for(int p = n - h; p > 0; p--) mx_printchar(' ');
			h == 1 ? mx_printchar('/'), mx_printchar('\\') : mx_printchar('/');
			if(h > 1) {
				for(int i = h2; i > 0; i--) mx_printchar(' ');
				mx_printchar('\\');
				if(b > 1) {
					for(int j = h - 1; j > 0; j--) mx_printchar(' ');
					mx_printchar('\\');
					b--;
				} else {
					for(int j = n - h; j > 0; j--) mx_printchar(' ');
					mx_printchar('|');
				}
				h2 += 2;
			}
			mx_printchar('\n');
		}
		mx_printchar('/');
		for(int i = 2 * n - 3; i > 0; i--) mx_printchar('_');
		mx_printchar('\\');
		mx_printchar('|');
		mx_printchar('\n');
	}
}

/*int main (){
	mx_pyramid(100);
	return 0;
}*/





