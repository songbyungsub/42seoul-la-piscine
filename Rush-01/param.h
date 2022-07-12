#ifndef PARAM_H
# define PARAM_H

typedef struct s_param
{
	int		box[4][4];
	int		check_ud[4][5];
	int		check_lr[4][5];
	int		input[16];
	int		x;
	int		y;
}				t_param;

#endif
