class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        closest_sum=nums[0]+nums[1]+nums[2]

        for i in range(len(nums)):
            j=i+1
            k=len(nums)-1
            while j<k:
                total=nums[i] + nums[j] + nums[k]
                if abs(target-total) < abs(target-closest_sum):
                    closest_sum=total
                if total < target:
                    j += 1        # sum too small → increase it
                elif total > target:
                    k -= 1        # sum too big → decrease it
                else:
                    return total

        return closest_sum


            



        