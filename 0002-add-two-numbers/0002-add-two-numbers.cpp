class Solution
	{
	public:
	ListNode* addTwoNumbers(ListNode* first, ListNode* second)
		{
		ListNode result_head;
		ListNode* result_tail = &result_head;
		int sum = 0; // also used for carry

		while(first != nullptr || second != nullptr)
			{
			if(first != nullptr)
				{
				sum += first->val;
				first = first->next;
				}
			if(second != nullptr)
				{
				sum += second->val;
				second = second->next;
				}

			result_tail->next = new ListNode(sum % 10);
			result_tail = result_tail->next;

			sum = sum > 9 ? 1 : 0; // carry
			}

		if(sum == 1) result_tail->next = new ListNode(1);

		return result_head.next;
		}
	};