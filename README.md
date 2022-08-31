# 3DViewer v1.0

![](view_screencast.m4v)

## Part 1. 3DViewer

Program to visualise 3D wireframe models:

- The program is developed in C language of C11 standard using gcc compiler. QT libraries are a part of project.
- Only one model can be viewed on the screen at a time.
- The program provides the ability to:
    - Load a wireframe model from an obj file (vertices and surfaces list support only).
    - Translate the model by a given distance in relation to the X, Y, Z axes.
    - Rotate the model by a given angle relative to its X, Y, Z axes.
    - Scale the model by a given value.
- GUI implementation is based on QT.
- The graphical user interface contains:
    - A button to select the model file and a field to output its name.
    - A visualisation area for the wireframe model.
    - Button/buttons and input fields for translating the model.
    - Button/buttons and input fields for rotating the model.
    - Button/buttons and input fields for scaling the model.
    - Information about the uploaded model - file name, number of vertices and edges.

## Part 2. Bonus. Settings

- The program allows customizing the type of projection (parallel and central).
- The program allows setting up the type (solid, dashed), color and thickness of the edges, display method (none, circle, square), color and size of the vertices.
- The program allows choosing the background color.
- Settings are saved between program restarts.

## Part 3. Bonus. Record

- The program allows saving the captured (rendered) images as bmp and jpeg files.
- The program allows recording small screencasts by a special button - the current custom affine transformation of the loaded object into gif-animation (640x480, 10fps, 5s).
