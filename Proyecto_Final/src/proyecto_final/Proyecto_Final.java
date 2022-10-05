
package proyecto_final;


import javax.swing.JOptionPane;

public class Proyecto_Final {

    /**
     * @param args the command line arguments
     */
    

    
    public static void main(String[] args){
        
        PProducto producto = new PProducto();
        
        String op = "";
        boolean v = true;
        
        
        producto.Deserizalizacion();
        while(v){
        
        op = JOptionPane.showInputDialog(
            "Inventario de Celulares\n\n"+
            "SELECIONE UNA OPCIÓN: \n" 
            + "1) Registrar Producto\n"
            + "2) Listar Productos\n"
            + "3) Modificar producto\n"
            + "4) Eliminar Producto\n"
            +"5) Salir\n\n");
        
        int opcion = Integer.parseInt(op);
        
        switch(opcion){
            case 1: 
                producto.Agregar();
                break;
            case 2:
                producto.Listar();
                break;
            case 3:
                producto.Editar();
                break;
            case 4:
                producto.Eliminar();
                break;
            case 5:
                System.out.println("Hasta la próxima!!!...");
                producto.Serializacion();
                System.exit(0);
                break;
            default:
                System.out.println("La opción que seleccione es incorrecta, "
                                 + "porfavor vuelva a intentarlo");
                break;
        }
       
      }

    }
    
}