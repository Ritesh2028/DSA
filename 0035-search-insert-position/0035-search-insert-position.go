func searchInsert(nums []int, target int) int {
    for i:=0;i<=len(nums)-1;i++{
        if nums[i]>=target{
            return i
        
        }
    }
    return len(nums)
}