const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090909", /* black   */
  [1] = "#909090", /* red     */
  [2] = "#B1B1B1", /* green   */
  [3] = "#C8C8C8", /* yellow  */
  [4] = "#D7D7D7", /* blue    */
  [5] = "#E8E8E8", /* magenta */
  [6] = "#F4F4F4", /* cyan    */
  [7] = "#f4f4f4", /* white   */

  /* 8 bright colors */
  [8]  = "#aaaaaa",  /* black   */
  [9]  = "#909090",  /* red     */
  [10] = "#B1B1B1", /* green   */
  [11] = "#C8C8C8", /* yellow  */
  [12] = "#D7D7D7", /* blue    */
  [13] = "#E8E8E8", /* magenta */
  [14] = "#F4F4F4", /* cyan    */
  [15] = "#f4f4f4", /* white   */

  /* special colors */
  [256] = "#090909", /* background */
  [257] = "#f4f4f4", /* foreground */
  [258] = "#f4f4f4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
