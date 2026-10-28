# analisis de esfuerzos en una armadura plana

## funcionalidades

### entrada
- [ ] leer la geometria de la armadura
- [ ] leer coordenadas de nodos
- [ ] leer conectividad de barras

### registro
- [ ] registrar cargas externas
- [ ] registrar condiciones de apoyo

### calculos
- [ ] calcular reacciones mediante las ecuaciones de equilibrio
- [ ] resolver el sistema de ecuaciones lineales mediante eliminacion gaussiana
- [ ] calcular la fuerza axial de cada barra luego clasificarla como traccion o compresion
- [ ] detectar modelos invalidos o sistemas sin sol. unica

### salida
- [ ] generar un reporte csv con las fuerzas calculadas
- [ ] mostrar un esquema 2d de la armadura y una representacion de las fuerzas mediante colors o simbolos

## entregable 1 - analisis y diseño

- documento de requerimientos funcionales y no funcionales
- descripcion de modulos:
  - entrada
  - modelo_estructura
  - equilibrio
  - sistema_lineal
  - resultados
  - visualizacion
- diagrama de casos de uso:
  - cargar estructura
  - analizar
  - consultar fuerzas
  - exportar resultados
- diagrama de flujo
  1. lectura
  2. validacion
  3. formulacion del sistema
  4. resolucion
  5. resultados
- modelo matematico con:
  - supuestos
  - unidades
  - un caso de prueba de referencia

## entregable 2 - implementacion

- codigo completo en C, organizado en `.h` y `.c`
- lectura de archivos con nodos, barras, apoyos y cargas
- reportes de reacciones y fuerzas internas
- visualizacion ascii o ventana 2d opcional (probablemente raylib, aunq hace unos meses estaba trabajando en un wrapper para la api de windows para hacer ventanas, solo que esta hecho para c++ asi q xd)
- README.md con instrucciones de compilacion y ejecucion (cambiare el nombre de este file dsps)
- documento de arquitectura que explique la responsabilidad de cada modulo


limitar el modelo a armaduras planas, barras articuladas, cargas estaticas y comportamiento axial lineal

permitido: 
- stdio.h
- stdlib.h
- math.h
- string.h