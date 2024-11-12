package mx.uv.practica04;

import org.springframework.data.repository.CrudRepository;

public interface iSaludador extends ClassLoaderRepository<Saludador, Integer>{

    void save(Saludador saludador);
}