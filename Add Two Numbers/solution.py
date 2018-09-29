# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        
        addone = 0       
        r = []
        while l1!= None or l2!= None:

            if l1 != None and l2 != None:
                tmp = l1.val + l2.val + addone
                if tmp >= 10:
                    tmp = tmp - 10
                    addone = 1
                else:
                    addone = 0
                r.append(tmp)
                l1 = l1.next
                l2 = l2.next

            elif l1 != None:
                tmp = l1.val + addone
                if tmp >= 10:
                    tmp = tmp - 10
                    addone = 1
                else:
                    addone = 0
                r.append(tmp)
                l1 = l1.next

            else:
                tmp = l2.val + addone
                if tmp >= 10:
                    tmp = tmp - 10
                    addone = 1
                else:
                    addone = 0
                r.append(tmp)
                l2 = l2.next
        
        if addone == 1:
            r.append(1)

        return r
        
        



if __name__ == "__main__":
    l1 = [2, 4, 3]
    l2 = [5, 6, 4, 2]
    
    x = Solution()
    result = x.addTwoNumbers(l1, l2)
    print(result)