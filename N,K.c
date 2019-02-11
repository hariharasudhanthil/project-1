int main(void)
{
    int arr [10] = {1,2,3,4,5,6,7,8,9,0};
    findpair(arr, 10, 7);
}
void findpair(int arr[], int len, int sum)
{
    std::sort(arr, arr+len);
    int i = 0;
    int j = len -1;
    while( i < j){
        while((arr[i] + arr[j]) <= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            i++;
        }
        j--;
        while((arr[i] + arr[j]) >= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            j--;
        }
    }
}
