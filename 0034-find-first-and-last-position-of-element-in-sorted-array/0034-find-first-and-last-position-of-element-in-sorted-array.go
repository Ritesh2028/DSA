func searchRange(nums []int, target int) []int {
    n := []int{-1, -1}
    a := 0

    for i := 0; i < len(nums); i++ {
        if nums[i] == target {
            if a == 0 {
                n[0] = i 
            }
            n[1] = i    
            a++
        }
    }

    return n
}