func convert(s string, numRows int) string {

	if len(s) == 1 || numRows == 1 {
		return s
	}
	var total = numRows*2 - 2
	interval := 0
	r := make([]byte, len(s))
	k := 0

	for i := 0; i < len(s); i += total {
		r[k] = s[i]
		k++
	}
	for i := 1; i < numRows-1; i++ {

		interval = i * 2
		for j := i; j < len(s); j += interval {
			r[k] = s[j]
			interval = total - interval
			k++
		}
	}

	for i := numRows - 1; i < len(s); i += total  {
		r[k] = s[i]
		k++
		//	fmt.Printf("%c\n",s[])
	}
	return string(r)
}