int birthdayCakeCandles(vector<int> candles)
{
    std::sort(candles.begin(), candles.end(), std::greater<int>());
    int max = candles[0];
    int count = 0;
    
    for (int n : candles)
    {
        if (max == n)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    return count;
}
