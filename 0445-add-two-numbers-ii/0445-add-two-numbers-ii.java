class Solution {
    public ListNode rev(ListNode head) {
        if (head == null)
            return null;
        ListNode curr = head;
        ListNode prev = null;
        ListNode nex = null;
        while (curr != null) {
            nex = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }

    public ListNode rev2(ListNode head) {
        if (head == null) {
            return null;
        }
        if (head.next == null) {
            return head;
        }
        ListNode newHead = rev2(head.next);
        head.next.next = head;
        head.next = null;
        return newHead;
    }

    public ListNode solve(ListNode head1, ListNode head2) {
        int car = 0;
        ListNode p = new ListNode(9);
        ListNode ans = p;
        while (head1 != null || head2 != null || car > 0) {
            int sum = car;
            if (head1 != null) {
                sum += head1.val;
                head1 = head1.next;
            }
            if (head2 != null) {
                sum += head2.val;
                head2 = head2.next;
            }
            int v = sum % 10;
            car = sum / 10;
            ans.next = new ListNode(v);
            ans = ans.next;
        }
        return p.next;
    }

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l1rev = rev(l1);
        ListNode l2rev = rev2(l2);
        ListNode res = solve(l1rev, l2rev);
        return rev(res);
    }
}
