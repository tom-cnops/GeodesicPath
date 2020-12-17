#ifndef RSPROJECT_COMPLEX_H
#define RSPROJECT_COMPLEX_H
#include "Face.h"
#include "utils.h"

class Complex
{
public:
    Complex(std::vector<Vertex> &vertices, std::vector<Edge> &edges, std::vector<Face> &faces,
            std::vector<std::vector<int>> &indices);
    Complex(std::vector<Vertex> &vertices, std::vector<Edge> &edges, std::vector<Face> &faces);

    SparseMatrix getEdgeVertexAdjacencyMatrix();
    SparseMatrix getFaceEdgeAdjacencyMatrix();
    std::vector<std::tuple<int, int>> edges_as_index_pairs();
    std::vector<std::vector<int>> faces_as_index_k_tuples();

private:
    std::vector<Vertex> vertices;
    std::vector<Edge> edges;
    std::vector<Face> faces;
    SparseMatrix edgeVertexAdjacencyMatrix;
    SparseMatrix faceEdgeAdjacencyMatrix;
};
#endif //RSPROJECT_COMPLEX_H