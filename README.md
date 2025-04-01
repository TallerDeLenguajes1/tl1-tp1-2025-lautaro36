 [![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

###.gitignore
El  .gitignore sirve para excluir ciertos archivos y carpetas del control de versiones de Git. Esto es útil para:

## ¿Cuándo se debe hacer?
Es ideal incluirlo desde el inicio del proyecto, antes de hacer cualquier commit. Esto evita que archivos no deseados lleguen al repositorio. Sin embargo, si estás trabajando en un proyecto ya existente, puedes añadirlo en cualquier momento, aunque deberás manejar los archivos ya rastreados para que dejen de ser parte del control de versiones.

## ¿Cómo configuraría el archivo .gitignore?
Crea el archivo: En el directorio raíz del repositorio, crea un archivo llamado .gitignore.
Especifica patrones: Agrega las rutas o patrones de los archivos/carpetas que quieras excluir. Ejemplo:
- ignorado.txt

- Ignorar archivos temporales y de compilación
*.log
*.tmp
*.class

- Ignorar configuraciones de IDE
.vscode/
.idea/

-   Ignorar archivos sensibles
.env
config/secrets.yml

### Punteros ###
- **¿A que se debe?**
A que el puntero guarda la direccion de memoria de la variable a la que apunta.
- **¿Que obtiene en el punto 4?**
El punto 4 nos da la direccion de memoria de la variable puntero.
- **¿Es igual a las anteriores?**
No es igual porque la direccion de memoria de la variable referenciada y la del puntero son distintas.
