/*
 * @lc app=leetcode id=5 lang=swift
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
    // leetcode 5
    // https://leetcode.com/problems/longest-palindromic-substring/
    // swift 4.2
    func longestPalindrome(_ s: String) -> String {
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
        if max == 0 {
            return ""
        }
        var startIndex = dict[chars[start]]!
        var endIndex = dict[chars[start]]!
        while startIndex > 0 && endIndex < chars.count - 1 {
            if chars[startIndex - 1] == chars[endIndex + 1] {
                startIndex -= 1
                endIndex += 1
            } else {
                break
            }
        }
        return String(chars[startIndex...endIndex])
    }
}
// @lc code=end

