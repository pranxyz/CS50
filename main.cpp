
int main()
{
    struct Node *start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next =
                                    newNode(11);
    start->next->next->next->next->next->next =
                                    newNode(10);
 
    printf("Linked list before removing duplicates ");
    printList(start);
 
    removeDuplicates(start);
 
    printf("\nLinked list after removing duplicates ");
    printList(start);
 
    return 0;
}


int main ()
{
  HumanPlayer *player1 = new HumanPlayer();
  ComputerPlayer *player2 = new ComputerPlayer();
  Referee referee;
  
  char result = referee.refGame(player1, player2);
  std::cout << result << std::endl;
  
  result = referee.refGame(player1, player2);
  std::cout << result << std::endl;
  
  result = referee.refGame(player1, player2);
  std::cout << result << std::endl;
  
  result = referee.refGame(player1, player2);
  std::cout << result << std::endl;
  
  result = referee.refGame(player1, player2);
  std::cout << result << std::endl;
  
  return 0;
}