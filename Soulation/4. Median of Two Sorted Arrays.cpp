class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		//Step one: Get The Sum of Length (nums1+nums2)

		//Step two: create a new array( mergearray[] ) that contains all int of nums1 and nums2

		/*Step three: Merge the two array into mergearray[]

		The Process Idea is writen below:
		Make a counter to record the progress

		for example we merge [1,2] and [3,4]
		we detect the smallest number from the beginning
		[1,2]             [3,4]
		 ^nums1counter=0   ^nums2counter=0

		the first array is smaller, so we put nums1[0] in to mergearray ----> mergearray[0] = 1

		then we compare the two array again
		[1,2]                   [3,4]
		   ^nums1counter=1       ^nums2counter=0

		the first array is smaller, so we put nums1[1] in to mergearray ----> mergearray[1] = 1

		then we compare the two array again
		[1,2]                          [3,4]
			  ^nums1counter=2>nums1     ^nums2counter=0
		nums1counter equals to 2 which is larger than the total size of the first array
		so we don't have to compare anymore, we can just add all numbers of the second array into mergearray


		*/

		//Step four: get the median

		//Step one
		int length = nums1.size() + nums2.size();

		//Step two
		int mergearray[length];

		int nums1counter = 0;
		int nums2counter = 0;

		double result; //This stores the output result

		//Step three
		for (int i = 0; i < length; i++) {
			//if both counters is larger than the array size, all of the data of both arrays is added into mergearray
			if ((nums1counter + 1 > nums1.size()) and (nums2counter + 1 > nums2.size())) {
				break;
			}

			//Check if there is any empty array
			if ((nums1counter + 1 > nums1.size()) or nums1.empty()) { //if nums1 is empty, loop to add all numbers of nums2 into mergearray 
				mergearray[i] = nums2[nums2counter];
				nums2counter++;
				continue;
			}
			else if ((nums2counter + 1 > nums2.size()) or nums2.empty()) { //if nums2 is empty, loop to add all numbers of nums1 into mergearray 
				mergearray[i] = nums1[nums1counter];
				nums1counter++;
				continue;
			}

			//comparing which is smaller
			if (nums1[nums1counter] > nums2[nums2counter]) {
				mergearray[i] = nums2[nums2counter];
				nums2counter++;
			}
			else {
				mergearray[i] = nums1[nums1counter];
				nums1counter++;
			}
		}

		/*
		if length % 2 == 0, the total amount of mergearray is a even number
		[1,2,3,4,   5,6   ,7,8,9,10]
		result = (5+6)/2

		if length % 2 == 0, the total amount of mergearray is a odd number
		[1,2,3,4,   5   ,6,7,8,9]
		result = 5
		*/
		//Step four
		if (length % 2 == 0) {
			result = double(mergearray[length / 2 - 1] + mergearray[length / 2 + 1 - 1]) / 2;
		}
		else {
			result = double(mergearray[length / 2]);
		}

		return result;
	}

};