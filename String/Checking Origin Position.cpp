/*There is a robot starting at position (0, 0), the origin, on a 2D plane. 
Given a sequence of its moves, judge if this robot ends up at (0, 0) after 
it completes its moves.The move sequence is represented by a string, and 
the character moves[i] represents its ith move. Valid moves are R (right), 
L (left), U (up), and D (down). If the robot returns to the origin after 
it finishes all of its moves, return true. Otherwise, return false.*/


class Solution {
public:
    bool judgeCircle(string moves) {
        bool is_origin = false;
        int x_pos = 0;
        int y_pos = 0;
        for(int i = 0; i < moves.length(); i++)
        {
            switch (moves[i])
            {
            case 'U':
                y_pos++;
                break;
                    
            case 'D':
                y_pos--;
                break;
                    
            case 'L':
                x_pos--;
                break;
                    
            case 'R':
                x_pos++;
                break;
            }
        }

        if (x_pos == 0 && y_pos == 0)
            is_origin = true;

        return is_origin;
    }
};
