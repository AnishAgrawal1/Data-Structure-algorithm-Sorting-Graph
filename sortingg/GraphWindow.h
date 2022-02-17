#pragma once
#include "Window.h"
#include "WindowManager.h"
#include "Button.h"
#include "Menu.h"
#include <thread>
#include <chrono>
#include "Cell.h"
#include <vector>
#include <memory>
#include "Node.h"
#include "TextBox.h"
#include "Edge.h"
#include <queue>
#include <set>

class GraphWindow :public Window
{
public:
    GraphWindow(WindowManager& windowManager, sf::RenderWindow& window);
    ~GraphWindow();
    void processEvents();
    void update(const sf::Time& dt);
    void draw();
    void reset();
    void sleep(int delay);
    Node* find(Node* val);
    void union_set(Node* node1, Node* node2);
    void kruskals();
    // void prims()
    // {
    //     int val = 3;
    //     //visited.push_back(nodes[val]);
    //     addEdge(nodes[val]);
    //     std::cout << "Before while" << std::endl;
    //     while (visited.size() != nodes.size())
    //     {
    //         //maintain priority in the edgeset for next edge
    //         std::cout << "before first if"<< std::endl;
    //         //check if edge of any visited node is in the top edge of edgeset
    //         if( checkVisit(edgeset[edgeset.size()-1]) )
    //         {
    //             std::cout << "inside if 1" << std::endl;
    //             edgeset.pop_back();
    //             continue;
    //         }
    //             //if not push the top edge in mst vector 
    //             //pop top edge in edgeset
    //             //make the node of the edge visited 
    //             //add the edges of new node in the edgeset
    //             //continue

            
    //         std::cout << "inside else" << std::endl;
    //         addNode(edgeset[edgeset.size() - 1]->getNode1());
    //         addNode(edgeset[edgeset.size() - 1]->getNode2());
    //         edgeset.pop_back();
    //         addEdge(edgeset.end()->getNode1());
    //         addEdge(edgeset[edgeset.size() - 1]->getNode2());
    //         mst.push_back(edgeset[edgeset.size() - 1]);

    //         //pop the top node
    //     }
    //     isMst = true;
    // }
private:
    // std::vector<Node*> visited;
    // std::vector<Edge*> edgeset;
    // bool searchEle(Node* node1)
    // {
    //     for (Node* node2 : visited)
    //     {
    //         if (node1 == node2)
    //             return true;
    //     }
    //     return false;
    // }
    // void addNode(Node* node1)
    // {
    //     for (Node* node2 : visited)
    //     {
    //         if (node2 == node1)
    //             return;
    //     }
    //     visited.push_back(node1);
    // }
    // bool checkVisit(Edge* edge1)
    // {
    //     for (Node* node1 : visited)
    //     {
    //         std::cout << node1->getValue() << std::endl;
    //     }
    //     std::cout << "inside checkVisit" << std::endl;
    //     if( (searchEle(edge1->getNode1())) &&
    //         (searchEle(edge1->getNode2())) )
    //     {
    //         std::cout << "inside if of checkvisit" << std::endl;
    //         edgeset.pop_back();
    //         return true;
    //     }
    //     return false;

    // }
    // void addEdge(Node* node1)
    // {
    //     std::cout << "inside addedge" << std::endl;
    //     for(Edge* edge1 : edges)
    //     {
    //         if((edge1->getNode1()==node1) || (edge1->getNode2()==node1))
    //         {
    //             std::cout << "inside if of addedge" << std::endl;
    //             for (Edge* edge3 : edgeset)
    //             {
    //                 if (edge3 == edge1)
    //                     break;

    //             }
                
    //         }
    //     }
    //     std::sort(edgeset.begin(), edgeset.end(), [](Edge* edge1, Edge* edge2) { return edge1->getWeight() > edge2->getWeight(); });

    //     for (Edge* edge2 : edgeset)
    //     {
    //         std::cout << edge2->getNode1()->getValue() << "\t" << edge2->getNode2()->getValue() << std::endl;
    //     }
    // }
    Node* node;
    Edge* edge;
    sf::Font& mFont;
    std::vector<Button::buttonPtr>mButtons;
    std::vector<Node*> nodes;
    std::vector<Edge*> edges;
    std::vector<Edge*> mst;
    void createGraph();
    bool isSelected[6];
    bool isClicked, canInsert, drawLine, isMst;
    int prevX, prevY;
    int mouseX, mouseY;
    int selected;
    void createEdge(int& a, int& b, int& c, int& d);
    void createNode(int& x, int& y);
};



