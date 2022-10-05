/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto_final;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Scanner;


/**
 *
 * @author Bismark Steve Garcia
 */
public class PProducto extends Producto implements Serializable{

    /**
     *
     */
    private static final long serialVersionUID = 1L;
    private boolean flag = false;
    private String val;
    
    public PProducto() {
        super();
    }
    
    
    private ArrayList<Producto> producto = new ArrayList<>();


    public ArrayList<Producto> getProducto() {
        return producto;
    }

    public void setProducto(ArrayList<Producto> producto) {
        this.producto = producto;
    }
    
    public ArrayList<Producto> Agregar(){
        Producto p = new Producto();
      
        Scanner s1 = new Scanner(System.in);
        Scanner s2 = new Scanner(System.in);
            
        do{
            System.out.println("Ingrese el codigo del producto ");
            val = s2.nextLine();
            flag = isInt(val);
            if (!flag){
                System.out.println("Digite datos numerico");
            }else{
              p.setCodigo(Integer.parseInt(val));  
            }
           
        }while(!flag); 
           
            System.out.println("Ingrese el nombre del Producto ");
            p.setNombre(s1.nextLine());
            System.out.println("Ingrese una Descripcion ");
            p.setDescripcion(s1.nextLine());
            System.out.println("Digite el precio ");
            p.setPrecio(s2.nextInt());
            producto.add(p);

        
        return producto;
    }
    private boolean isInt(String Numero){
        boolean boo = false;
        
        try{
            int num = Integer.parseInt(Numero);
            boo = true;
        } catch(Exception ex){
            return boo;
        }
        return boo;
        
    }
        public void Listar(){
        for(Producto pdt : this.getProducto()){
          System.out.println("Código: "+pdt.getCodigo()+
                             " | Marca: "+pdt.getNombre()+
                             " | Descripción: "+pdt.getDescripcion()+
                             " | Precio: "+pdt.getPrecio());
            
        }
        
}
        public ArrayList<Producto> Editar(){
            Scanner s1 = new Scanner(System.in);
            Scanner s2 = new Scanner(System.in);
            int codigo;
            Listar();
            
            System.out.println("Ingrese el codigo del producto que va ha modificar: ");
            codigo = s1.nextInt();
            for (Producto p : producto) {
             if(p.getCodigo()== codigo){
                 System.out.println("Ingrese el nombre del Producto ");
                 p.setNombre(s2.nextLine());
                 System.out.println("Ingrese una Descripcion ");
                 p.setDescripcion(s2.nextLine());
                 System.out.println("Digite el precio ");
                 p.setPrecio(s1.nextInt());
                break;
               }
        }
             return producto;
        }
        
        public ArrayList<Producto> Eliminar(){
        Scanner s = new Scanner(System.in);
        int c = 0;
        int codigo;
        Listar();

        System.out.println("Ingrese el codigo del producto que desea eliminar: ");
        codigo = s.nextInt();
        
        for (Producto p : producto) {
            if(p.getCodigo() == codigo){
                producto.remove(c);
                break;
            }
            else c++;
        }
        
        return producto;

    }
    
    private boolean validarCodigo(int codigo){
        boolean res = false;
        
        for (Producto p : producto) {
            if(codigo == p.getCodigo()){
                System.out.println("El codigo que ingreso ya existe, porfavor ingrese uno diferente...");
                Agregar();
            }
            
            else if(codigo != p.getCodigo()) res = true;
        }
        return res;
    }
    
    public void Serializacion(){
        FileOutputStream fos = null;
        ObjectOutputStream salida = null;
        
        try {
            fos = new FileOutputStream("C:\\Users\\Bismark Steve Garcia\\Documents\\Proyecto_Final\\BD.dat");
            salida = new ObjectOutputStream(fos);
            salida.writeObject(this.getProducto());
        } 
        catch (FileNotFoundException e) {
            System.out.println(e.getMessage());
        }
        catch (IOException e) {
            System.out.println(e.getMessage());
        } 
        finally{
            try {
                if (fos != null) {
                    fos.close();
                }
                if (salida != null) {
                    salida.close();
                }
            } catch (IOException e) {
                System.out.println(e.getMessage());
            }
        }
        
    }

    public void Deserizalizacion(){
        FileInputStream fis = null;
        ObjectInputStream entrada = null;

        try {
            fis = new FileInputStream("C:\\Users\\(pc)\\Documents\\Proyecto_Final\\BD.dat");
            entrada = new ObjectInputStream(fis);
            producto = (ArrayList<Producto>) entrada.readObject();

            
        } 
        catch (FileNotFoundException e) {
            System.out.println(e.getMessage());
        }
        catch (ClassNotFoundException e) {
            System.out.println(e.getMessage());
        } 
        catch (IOException e) {
            System.out.println(e.getMessage());
        } 
        finally{
            try {
                if (fis != null) {
                    fis.close();
                }
                if (entrada != null) {
                    entrada.close();
                }
            } catch (IOException e) {
                System.out.println(e.getMessage());
            }
        }

    }

    
}
