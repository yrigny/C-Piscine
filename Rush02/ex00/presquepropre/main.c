#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
void	ft_getline(char *buff, char* line_tofind);
int		ft_atoi(char str[4]);
int		ft_printstop(char **array, int i_group, int group);
void	ft_decom(char *nb, char **array, int *group);
void	ft_print3digit(char str[4], char temp[4], char *buff);
void	ft_print2digit(char str[4], char *buff);
void	ft_printsep(char **array, int i_group, int group, char *buff);
void	ft_print(char **array, int group, char *buff);
int		tab_size(char *input);
char	**create_tab(int size);
int		what(char c);
int		sign_input(char *str);
int		size_input(char *str);
char	*ft_atoa(char *str);
int		txt_size(char *txt);
char	*create_dico(char *txt);
char	*error_1(int argc, char *dico, char **argv);
char	*error_dico(int argc, char **argv);

char	*error_1(int argc, char *dico, char **argv)
{
	char	*input_num;
	if (argc == 2)
		input_num = ft_atoa(argv[1]);
	if (argc == 3)		
		input_num = ft_atoa(argv[2]);
	if (input_num == NULL)
	{
		free(dico);
		write(1, "Error\n", 6);
		return (NULL);
	}
	if (ft_strlen(input_num) == 0)
	{
		free(dico);
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	return (input_num);
}

char	*error_dico(int argc, char **argv)
{
	char	*dico;
	if (argc == 2)
		dico = create_dico("numbers.dict");
	if (argc == 3)
		dico = create_dico(argv[1]);		
	if (dico == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	return (dico);
}

int	main(int argc, char **argv)
{
	char 	*dico;
	char	*input_num;
	int		tab_siz;
	char	**tab;

	if (!(argc >= 2 && argc <= 3))
		return (0);
	dico = error_dico(argc, argv);
	if (dico == NULL)
		return (0);	
	input_num = error_1(argc, dico, argv);
	if (input_num == NULL)
		return (0);
	tab_siz = tab_size(input_num);
	tab = create_tab(tab_siz);
	ft_decom(input_num, tab, &tab_siz);
	ft_print(tab, tab_siz, dico);
	free(dico);
	free(tab);
	return 0;
}
