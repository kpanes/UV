package mx.uv.practica04;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

import org.springframework.aot.generate.GenerationContext;
import org.springframework.boot.autoconfigure.domain.EntityScan;

@EntityScan
public class Saludador {
    @Id
    @GeneratedValue(strategy = GenerationContext.AUTO)
    private Integer id;
    public Integer getId() {
        return id;
    }
    public void setId(Integer id) {
        this.id = id;
    }
    private String nombre;
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}