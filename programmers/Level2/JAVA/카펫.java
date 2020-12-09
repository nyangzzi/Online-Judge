class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[2];
        brown += yellow;

	    int w = 1, h = 0;
	    while (true) {
		    if (brown % w == 0) {
			    h = brown / w;
			    int a = h - 2, b = w - 2;
			    if (a * b == yellow) {
				    if (w > h) {
					    answer[0] = w;
					    answer[1] = h;
				    }
				    else {
					    answer[0] = h;
					    answer[1] = w;
				    }
				    break;
			    }
		    }
		    w++;
	    }
	    return answer;
    }
}
