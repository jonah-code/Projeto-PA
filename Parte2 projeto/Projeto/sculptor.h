#ifndef SCULPTOR_H
#define SCULPTOR_H
/**
 * @brief A estrutura voxel é ultilizada para para atribucao de caracteriticas a matriz do tipo voxel
 */

struct Voxel {
    /**
   * @brief r  vai receber o valor vermelho na posicao passada da matriz de voxel
   */
  float r;
  /**
   * @brief g vai receber o valor verde na posicao passada da matriz de voxel
   */
  float g;
  /**
   * @brief b  vai receber o valor azul na posicao passada da matriz de voxel
   */
  float b; // Colors
  /**
   * @brief a vai armazenar o valor true ou false para verificar quais voxel seram desenhados
   */
  float a;
  // Transparency
  bool isOn; // Included or not
};
/**
 * @brief A classe Sculptor serve para criar esculturas tridimensionais com voxel
 */
class Sculptor
{
protected:
  Voxel ***v;
  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
     * @brief Sculptor Contrutor da classe que recebe tamanho da matriz para ser alocada
     * @param _nx recebe a largura da matriz
     * @param _ny recebe a altura da matriz
     * @param _nz recebe a profundidade da matriz
     */
  Sculptor(int _nx, int _ny, int _nz);
  /**
      Destructor serve para liberar o espaço da memoria alocada
     */
  ~Sculptor();
  /**
     * @brief setColor define a cor da estura a ser desenhada
     * @param r referece ao sitema de cores RGB sendo 'r' a cor vermelha podendo variar de 0 a 1
     * @param g referece ao sitema de cores RGB sendo 'g' a cor verde podendo variar de 0 a 1
     * @param b referece ao sitema de cores RGB sendo 'b' a cor azul podendo variar de 0 a 1
     * @param alpha define a transparencia do voxel a ser desenhado podendo variar de 0 a 1
     */
  void setColor(float r, float g, float b, float alpha);
  /**
     * @brief putVoxel desenha um voxel em uma posicao especifica
     * @param x posicao x a ser desenhada
     * @param y posicao y a ser desenhada
     * @param z posicao z a ser desenhada
     */
  void putVoxel(int x, int y, int z);
  /**
     * @brief cutVoxel remove um voxel em uma posicao especifica
     * @param x posicao x a ser removida
     * @param y posicao y a ser removida
     * @param z posicao z a ser removida
     */
  void cutVoxel(int x, int y, int z);
  /**
     * @brief writeOFF exporta um aquivo no formato OFF
     * @param filename recebe o nome do aquivo para ser exportado
     */
  void writeOFF(char* filename);
};
#endif // SCULPTOR_H
