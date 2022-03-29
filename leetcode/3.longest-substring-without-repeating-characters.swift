/*
 * @lc app=leetcode id=3 lang=swift
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
    func lengthOfLongestSubstring(_ s: String) -> Int {
        var max = 0
        var start = 0
        var end = 0
        var dict = [Character: Int]()
        let chars = Array(s)
        while end < chars.count {
            let c = chars[end]
            if let index = dict[c] {
                if index >= start {
                    start = index + 1
                }
            }
            dict[c] = end
            end += 1
            max = max > end - start ? max : end - start
        }
        return max
    }
}
// @lc code=end

