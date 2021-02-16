#include"read_lidar_data.h"

std::vector<float> read_lidar_data(const std::string lidar_data_path)
{
    std::ifstream lidar_data_file(lidar_data_path, std::ifstream::in | std::ifstream::binary);
    lidar_data_file.seekg(0, std::ios::end);
    const size_t num_elements = lidar_data_file.tellg() / sizeof(float);
    lidar_data_file.seekg(0, std::ios::beg);

    std::vector<float> lidar_data_buffer(num_elements);
    lidar_data_file.read(reinterpret_cast<char*>(&lidar_data_buffer[0]), num_elements*sizeof(float));
    return lidar_data_buffer;
}

//通过传递引用的方式获得点云数据
void read_lidar_point_cloud(const std::string lidar_data_path,vector<vector3d>& lidar_points){
    
    // std::string dataset_folder, sequence_number, output_bag_file;
    // std::stringstream lidar_data_path;
    // lidar_data_path << dataset_folder << "sequences/" + sequence_number + "/velodyne/" 
    //                     << std::setfill('0') << std::setw(6) << line_num << ".bin";
    //std::vector<float> lidar_data = read_lidar_data(lidar_data_path.str());
    std::vector<float> lidar_data = read_lidar_data(lidar_data_path);
    std::cout << "totally " << lidar_data.size() / 4.0 << " points in this lidar frame \n";
    //std::vector<vector3d> lidar_points;
    std::vector<float> lidar_intensities;
    for (std::size_t i = 0; i < lidar_data.size(); i += 4)
    {
        lidar_points.emplace_back(lidar_data[i], lidar_data[i+1], lidar_data[i+2]);
        lidar_intensities.push_back(lidar_data[i+3]);
        
        // point.x = lidar_data[i];
        // point.y = lidar_data[i + 1];
        // point.z = lidar_data[i + 2];
        // point.intensity = lidar_data[i + 3];
        // laser_cloud.push_back(point);
    }
    //return lidar_points;        

}

int main(){

    //std::vector<float> lidar_data = read_lidar_data(lidar_data_path.str());

    return 0;
}