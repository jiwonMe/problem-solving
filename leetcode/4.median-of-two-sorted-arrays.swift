/*
 * @lc app=leetcode id=4 lang=swift
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
    func findKth(_ a: [Int], _ b: [Int], _ k: Int) -> Int {
        let m = a.count
        let n = b.count
        if m > n {
            return findKth(b, a, k)
        }
        if m == 0 {
            return b[k - 1]
        }
        if k == 1 {
            return min(a[0], b[0])
        }
        let pa = min(k / 2, m)
        let pb = k - pa
        if a[pa - 1] < b[pb - 1] {
            return findKth(Array(a[pa..<m]), b, k - pa)
        } else if a[pa - 1] > b[pb - 1] {
            return findKth(a, Array(b[pb..<n]), k - pb)
        } else {
            return a[pa - 1]
        }
    }

    func findMedianSortedArrays(_ nums1: [Int], _ nums2: [Int]) -> Double {
        // leetcode 4
        // https://leetcode.com/problems/median-of-two-sorted-arrays/
        // swift 4.2

        var nums1 = nums1
        var nums2 = nums2
        var total = nums1.count + nums2.count
        if total % 2 == 1 {
            return Double(findKth(nums1, nums2, total / 2 + 1))
        } else {
            return Double(findKth(nums1, nums2, total / 2) + findKth(nums1, nums2, total / 2 + 1)) / 2
        }
    }
}
// @lc code=end

