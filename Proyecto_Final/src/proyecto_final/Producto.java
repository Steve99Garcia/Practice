/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto_final;

import java.io.Serializable;

/**
 *
 * @author Bismark Steve Garcia
 */
public class Producto implements Serializable {
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    protected String Nombre;
   protected String Descripcion;
   protected int Precio;
   protected int Codigo;

    public String getNombre() {
        return Nombre;
    }

    public void setNombre(final String Nombre) {
        this.Nombre = Nombre;
    }

    public String getDescripcion() {
        return Descripcion;
    }

    public void setDescripcion(final String Descripcion) {
        this.Descripcion = Descripcion;
    }

    public int getPrecio() {
        return Precio;
    }

    public void setPrecio(final int Precio) {
        this.Precio = Precio;
    }

    public int getCodigo() {
        return Codigo;
    }

    public void setCodigo(final int Codigo) {
        this.Codigo = Codigo;
    }
    
   
    
}
