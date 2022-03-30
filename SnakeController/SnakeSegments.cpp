#include "SnakeSegments.hpp"

#include <algorithm>

Segment::Segment(std::istringstream istr){
    istr >> this->x >> this->y;
}

bool Segment::isSegmentAtPosition(int x, int y) const
{
    return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}

// Segment Segment::calculateNewHead() const
// {
//     Segment const& currentHead = m_segments.front();

//     Segment newHead;
//     newHead.x = currentHead.x + (isHorizontal(m_currentDirection) ? isPositive(m_currentDirection) ? 1 : -1 : 0);
//     newHead.y = currentHead.y + (isVertical(m_currentDirection) ? isPositive(m_currentDirection) ? 1 : -1 : 0);

//     return newHead;
// }

void Segment::pushB(Segment seg)
{
    m_segments.push_back(seg);
}